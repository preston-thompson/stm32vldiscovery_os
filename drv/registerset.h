// NVIC
#define REG_NVIC_ADDR 0xE000E100
    #define REG_NVIC_ISER0_OFFS 0x00
    #define REG_NVIC_ISER1_OFFS 0x04
        #define REG_NVIC_ISER1_USART1_MASK (1 << 5)

// RCC
#define REG_RCC_ADDR 0x40021000
    #define REG_RCC_APB2RSTR_OFFS 0x0C
    #define REG_RCC_APB1RSTR_OFFS 0x10
    #define REG_RCC_APB1ENR_OFFS 0x1C
        #define REG_RCC_APB1ENR_USART2EN_MASK (1 << 17)
        #define REG_RCC_APB1ENR_USART3EN_MASK (1 << 18)
        #define REG_RCC_APB1ENR_USART4EN_MASK (1 << 19)
        #define REG_RCC_APB1ENR_USART5EN_MASK (1 << 20)
    #define REG_RCC_APB2ENR_OFFS 0x18
        #define REG_RCC_APB2ENR_USART1EN_MASK (1 << 14)
        #define REG_RCC_APB2ENR_IOPEEN_MASK (1 << 6)
        #define REG_RCC_APB2ENR_IOPDEN_MASK (1 << 5)
        #define REG_RCC_APB2ENR_IOPCEN_MASK (1 << 4)
        #define REG_RCC_APB2ENR_IOPBEN_MASK (1 << 3)
        #define REG_RCC_APB2ENR_IOPAEN_MASK (1 << 2)
        #define REG_RCC_APB2ENR_AFIOEN_MASK (1 << 0)
    #define REG_RCC_CIR_OFFS 0x08

// GPIO
#define REG_GPIO_PORTA_ADDR 0x40010800
#define REG_GPIO_PORTB_ADDR 0x40010C00
#define REG_GPIO_PORTC_ADDR 0x40011000
#define REG_GPIO_PORTD_ADDR 0x40011400
#define REG_GPIO_PORTE_ADDR 0x40011800
    #define REG_GPIO_CRL_OFFS 0x00
    #define REG_GPIO_CRH_OFFS 0x04
        #define REG_GPIO_CRH_MODE9_MASK 0x30
        #define REG_GPIO_CRH_MODE9_POS 4
        #define REG_GPIO_CRH_CNF9_MASK 0xC0
        #define REG_GPIO_CRH_CNF9_POS 6
        #define REG_GPIO_CRH_MODE10_MASK 0x300
        #define REG_GPIO_CRH_MODE10_POS 8
        #define REG_GPIO_CRH_CNF10_MASK 0xC00
        #define REG_GPIO_CRH_CNF10_POS 10

// USART
#define REG_USART1_INTERRUPT_VECTOR_ADDR 0x000000D4
#define REG_USART1_ADDR 0x40013800
    #define REG_USART_SR_OFFS 0x00
        #define REG_USART_SR_TC_MASK (1 << 6)
        #define REG_USART_SR_TXE_MASK (1 << 7)
        #define REG_USART_SR_RXNE_MASK (1 << 5)
    #define REG_USART_DR_OFFS 0x04
    #define REG_USART_BRR_OFFS 0x08
        #define REG_USART_BRR_DIV_FRACTION_MASK 0xF
        #define REG_USART_BRR_DIV_FRACTION_POS 0
        #define REG_USART_BRR_DIV_MANTISSA_MASK 0xFFF0
        #define REG_USART_BRR_DIV_MANTISSA_POS 4
    #define REG_USART_CR1_OFFS 0x0C
        #define REG_USART_CR1_RE_MASK (1 << 2)
        #define REG_USART_CR1_TE_MASK (1 << 3)
        #define REG_USART_CR1_RXNEIE_MASK (1 << 5)
        #define REG_USART_CR1_TXEIE_MASK (1 << 7)
        #define REG_USART_CR1_TCIE_MASK (1 << 6)
        #define REG_USART_CR1_UE_MASK (1 << 13)
    #define REG_USART_CR2_OFFS 0x10
    #define REG_USART_CR3_OFFS 0x14
    #define REG_USART_GTPR_OFFS 0x18

// Flash
#define REG_FLASH_MEM_ADDR 0x08000000
#define REG_FLASH_KEY1 0x45670123
#define REG_FLASH_KEY2 0xCDEF89AB
#define REG_FLASH_RDPRT_KEY 0x00A5
#define REG_FLASH_ADDR 0x40022000
    #define REG_FLASH_ACR_OFFS 0x00
    #define REG_FLASH_KEYR_OFFS 0x04
    #define REG_FLASH_OPTKEYR_OFFS 0x08
    #define REG_FLASH_SR_OFFS 0x0C
        #define REG_FLASH_SR_BSY_MASK (1 << 0)
    #define REG_FLASH_CR_OFFS 0x10
        #define REG_FLASH_CR_LOCK_MASK (1 << 7)
        #define REG_FLASH_CR_PG_MASK (1 << 0)
        #define REG_FLASH_CR_PER_MASK (1 << 1)
        #define REG_FLASH_CR_STRT_MASK (1 << 6)
        #define REG_FLASH_CR_OPTER_MASK (1 << 5)
    #define REG_FLASH_AR_OFFS 0x14
    #define REG_FLASH_OBR_OFFS 0x1C
    #define REG_FLASH_WRPR_OFFS 0x20