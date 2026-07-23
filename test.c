typedef unsigned char  uint8_t;

typedef unsigned int   uint32_t;

#define LED_REG (*(volatile uint8_t *)0x80000000)

#define INPUT_BRAM_BASE   0x40000000
#define WEIGHT_BRAM_BASE  0x50000000

#define BNN_BASE          0x30000000

#define BNN_CTRL          (*(volatile uint32_t *)(BNN_BASE + 0x00))
#define BNN_STATUS        (*(volatile uint32_t *)(BNN_BASE + 0x04))
#define BNN_INPUT_PTR     (*(volatile uint32_t *)(BNN_BASE + 0x08))
#define BNN_WEIGHT_PTR    (*(volatile uint32_t *)(BNN_BASE + 0x0C))
#define BNN_RESULT        (*(volatile uint32_t *)(BNN_BASE + 0x10))

#define BNN_BUSY_MASK     0x1
#define BNN_DONE_MASK     0x2

volatile uint32_t *input_bram  = (volatile uint32_t *)INPUT_BRAM_BASE;
volatile uint32_t *weight_bram = (volatile uint32_t *)WEIGHT_BRAM_BASE;

uint32_t input_vectors[8] =
{
    0xFFFFFFFF,
    0x00000000,
    0xAAAAAAAA,
    0x55555555,
    0x12345678,
    0x87654321,
    0x0F0F0F0F,
    0xF0F0F0F0
};

uint32_t weight_vectors[8] =
{
    0xFFFFFFFF,
    0xFFFFFFFF,
    0xAAAAAAAA,
    0x55555555,
    0x87654321,
    0x12345678,
    0xF0F0F0F0,
    0x0F0F0F0F
};

int main()
{
    LED_REG = 0x00;

    //---------------------------------------------------
    // Load Input BRAM
    //---------------------------------------------------

    for(int i=0;i<8;i++)
        input_bram[i]=input_vectors[i];

    //---------------------------------------------------
    // Load Weight BRAM
    //---------------------------------------------------

    for(int i=0;i<8;i++)
        weight_bram[i]=weight_vectors[i];

    //---------------------------------------------------
    // Program DMA pointers
    //---------------------------------------------------

    BNN_INPUT_PTR  = INPUT_BRAM_BASE;
    BNN_WEIGHT_PTR = WEIGHT_BRAM_BASE;

    //---------------------------------------------------
    // Start accelerator
    //---------------------------------------------------

    BNN_CTRL = 1;

    //---------------------------------------------------
    // Wait until done
    //---------------------------------------------------

    while((BNN_STATUS & BNN_DONE_MASK)==0);

    //---------------------------------------------------
    // Read result
    //---------------------------------------------------

    uint32_t result = BNN_RESULT;

    //---------------------------------------------------
    // Simple sanity check
    //---------------------------------------------------

    if(result!=0)
        LED_REG=0xFF;
    else
        LED_REG=0x01;

    while(1)
        asm volatile("wfi");
}