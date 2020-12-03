//--------------------------------------------------------------------------------
// Auto-generated by Migen (a5cc037) & LiteX (5097b7ae) on 2020-12-02 21:53:19
//--------------------------------------------------------------------------------
#include <generated/soc.h>
#ifndef __GENERATED_CSR_H
#define __GENERATED_CSR_H
#include <stdint.h>
#include <system.h>
#ifndef CSR_ACCESSORS_DEFINED
#include <hw/common.h>
#endif /* ! CSR_ACCESSORS_DEFINED */
#ifndef CSR_BASE
#define CSR_BASE 0x82000000L
#endif

/* ctrl */
#define CSR_CTRL_BASE (CSR_BASE + 0x0L)
#define CSR_CTRL_RESET_ADDR (CSR_BASE + 0x0L)
#define CSR_CTRL_RESET_SIZE 1
static inline uint32_t ctrl_reset_read(void) {
	return csr_read_simple(CSR_BASE + 0x0L);
}
static inline void ctrl_reset_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x0L);
}
#define CSR_CTRL_SCRATCH_ADDR (CSR_BASE + 0x4L)
#define CSR_CTRL_SCRATCH_SIZE 1
static inline uint32_t ctrl_scratch_read(void) {
	return csr_read_simple(CSR_BASE + 0x4L);
}
static inline void ctrl_scratch_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x4L);
}
#define CSR_CTRL_BUS_ERRORS_ADDR (CSR_BASE + 0x8L)
#define CSR_CTRL_BUS_ERRORS_SIZE 1
static inline uint32_t ctrl_bus_errors_read(void) {
	return csr_read_simple(CSR_BASE + 0x8L);
}

/* uart_phy */
#define CSR_UART_PHY_BASE (CSR_BASE + 0x1000L)
#define CSR_UART_PHY_TUNING_WORD_ADDR (CSR_BASE + 0x1000L)
#define CSR_UART_PHY_TUNING_WORD_SIZE 1
static inline uint32_t uart_phy_tuning_word_read(void) {
	return csr_read_simple(CSR_BASE + 0x1000L);
}
static inline void uart_phy_tuning_word_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x1000L);
}

/* uart */
#define CSR_UART_BASE (CSR_BASE + 0x1800L)
#define CSR_UART_RXTX_ADDR (CSR_BASE + 0x1800L)
#define CSR_UART_RXTX_SIZE 1
static inline uint32_t uart_rxtx_read(void) {
	return csr_read_simple(CSR_BASE + 0x1800L);
}
static inline void uart_rxtx_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x1800L);
}
#define CSR_UART_TXFULL_ADDR (CSR_BASE + 0x1804L)
#define CSR_UART_TXFULL_SIZE 1
static inline uint32_t uart_txfull_read(void) {
	return csr_read_simple(CSR_BASE + 0x1804L);
}
#define CSR_UART_RXEMPTY_ADDR (CSR_BASE + 0x1808L)
#define CSR_UART_RXEMPTY_SIZE 1
static inline uint32_t uart_rxempty_read(void) {
	return csr_read_simple(CSR_BASE + 0x1808L);
}
#define CSR_UART_EV_STATUS_ADDR (CSR_BASE + 0x180cL)
#define CSR_UART_EV_STATUS_SIZE 1
static inline uint32_t uart_ev_status_read(void) {
	return csr_read_simple(CSR_BASE + 0x180cL);
}
static inline void uart_ev_status_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x180cL);
}
#define CSR_UART_EV_PENDING_ADDR (CSR_BASE + 0x1810L)
#define CSR_UART_EV_PENDING_SIZE 1
static inline uint32_t uart_ev_pending_read(void) {
	return csr_read_simple(CSR_BASE + 0x1810L);
}
static inline void uart_ev_pending_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x1810L);
}
#define CSR_UART_EV_ENABLE_ADDR (CSR_BASE + 0x1814L)
#define CSR_UART_EV_ENABLE_SIZE 1
static inline uint32_t uart_ev_enable_read(void) {
	return csr_read_simple(CSR_BASE + 0x1814L);
}
static inline void uart_ev_enable_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x1814L);
}
#define CSR_UART_TXEMPTY_ADDR (CSR_BASE + 0x1818L)
#define CSR_UART_TXEMPTY_SIZE 1
static inline uint32_t uart_txempty_read(void) {
	return csr_read_simple(CSR_BASE + 0x1818L);
}
#define CSR_UART_RXFULL_ADDR (CSR_BASE + 0x181cL)
#define CSR_UART_RXFULL_SIZE 1
static inline uint32_t uart_rxfull_read(void) {
	return csr_read_simple(CSR_BASE + 0x181cL);
}

/* timer0 */
#define CSR_TIMER0_BASE (CSR_BASE + 0x2000L)
#define CSR_TIMER0_LOAD_ADDR (CSR_BASE + 0x2000L)
#define CSR_TIMER0_LOAD_SIZE 1
static inline uint32_t timer0_load_read(void) {
	return csr_read_simple(CSR_BASE + 0x2000L);
}
static inline void timer0_load_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x2000L);
}
#define CSR_TIMER0_RELOAD_ADDR (CSR_BASE + 0x2004L)
#define CSR_TIMER0_RELOAD_SIZE 1
static inline uint32_t timer0_reload_read(void) {
	return csr_read_simple(CSR_BASE + 0x2004L);
}
static inline void timer0_reload_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x2004L);
}
#define CSR_TIMER0_EN_ADDR (CSR_BASE + 0x2008L)
#define CSR_TIMER0_EN_SIZE 1
static inline uint32_t timer0_en_read(void) {
	return csr_read_simple(CSR_BASE + 0x2008L);
}
static inline void timer0_en_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x2008L);
}
#define CSR_TIMER0_UPDATE_VALUE_ADDR (CSR_BASE + 0x200cL)
#define CSR_TIMER0_UPDATE_VALUE_SIZE 1
static inline uint32_t timer0_update_value_read(void) {
	return csr_read_simple(CSR_BASE + 0x200cL);
}
static inline void timer0_update_value_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x200cL);
}
#define CSR_TIMER0_VALUE_ADDR (CSR_BASE + 0x2010L)
#define CSR_TIMER0_VALUE_SIZE 1
static inline uint32_t timer0_value_read(void) {
	return csr_read_simple(CSR_BASE + 0x2010L);
}
#define CSR_TIMER0_EV_STATUS_ADDR (CSR_BASE + 0x2014L)
#define CSR_TIMER0_EV_STATUS_SIZE 1
static inline uint32_t timer0_ev_status_read(void) {
	return csr_read_simple(CSR_BASE + 0x2014L);
}
static inline void timer0_ev_status_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x2014L);
}
#define CSR_TIMER0_EV_PENDING_ADDR (CSR_BASE + 0x2018L)
#define CSR_TIMER0_EV_PENDING_SIZE 1
static inline uint32_t timer0_ev_pending_read(void) {
	return csr_read_simple(CSR_BASE + 0x2018L);
}
static inline void timer0_ev_pending_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x2018L);
}
#define CSR_TIMER0_EV_ENABLE_ADDR (CSR_BASE + 0x201cL)
#define CSR_TIMER0_EV_ENABLE_SIZE 1
static inline uint32_t timer0_ev_enable_read(void) {
	return csr_read_simple(CSR_BASE + 0x201cL);
}
static inline void timer0_ev_enable_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x201cL);
}

/* leds */
#define CSR_LEDS_BASE (CSR_BASE + 0x2800L)
#define CSR_LEDS_OUT_ADDR (CSR_BASE + 0x2800L)
#define CSR_LEDS_OUT_SIZE 1
static inline uint32_t leds_out_read(void) {
	return csr_read_simple(CSR_BASE + 0x2800L);
}
static inline void leds_out_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x2800L);
}

/* switchs */
#define CSR_SWITCHS_BASE (CSR_BASE + 0x3000L)
#define CSR_SWITCHS_IN_ADDR (CSR_BASE + 0x3000L)
#define CSR_SWITCHS_IN_SIZE 1
static inline uint32_t switchs_in_read(void) {
	return csr_read_simple(CSR_BASE + 0x3000L);
}

/* buttons */
#define CSR_BUTTONS_BASE (CSR_BASE + 0x3800L)
#define CSR_BUTTONS_IN_ADDR (CSR_BASE + 0x3800L)
#define CSR_BUTTONS_IN_SIZE 1
static inline uint32_t buttons_in_read(void) {
	return csr_read_simple(CSR_BASE + 0x3800L);
}

/* display */
#define CSR_DISPLAY_BASE (CSR_BASE + 0x4000L)
#define CSR_DISPLAY_DIG_0_ADDR (CSR_BASE + 0x4000L)
#define CSR_DISPLAY_DIG_0_SIZE 1
static inline uint32_t display_dig_0_read(void) {
	return csr_read_simple(CSR_BASE + 0x4000L);
}
static inline void display_dig_0_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x4000L);
}
#define CSR_DISPLAY_DIG_1_ADDR (CSR_BASE + 0x4004L)
#define CSR_DISPLAY_DIG_1_SIZE 1
static inline uint32_t display_dig_1_read(void) {
	return csr_read_simple(CSR_BASE + 0x4004L);
}
static inline void display_dig_1_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x4004L);
}
#define CSR_DISPLAY_DIG_2_ADDR (CSR_BASE + 0x4008L)
#define CSR_DISPLAY_DIG_2_SIZE 1
static inline uint32_t display_dig_2_read(void) {
	return csr_read_simple(CSR_BASE + 0x4008L);
}
static inline void display_dig_2_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x4008L);
}
#define CSR_DISPLAY_DIG_3_ADDR (CSR_BASE + 0x400cL)
#define CSR_DISPLAY_DIG_3_SIZE 1
static inline uint32_t display_dig_3_read(void) {
	return csr_read_simple(CSR_BASE + 0x400cL);
}
static inline void display_dig_3_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x400cL);
}
#define CSR_DISPLAY_DIG_4_ADDR (CSR_BASE + 0x4010L)
#define CSR_DISPLAY_DIG_4_SIZE 1
static inline uint32_t display_dig_4_read(void) {
	return csr_read_simple(CSR_BASE + 0x4010L);
}
static inline void display_dig_4_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x4010L);
}
#define CSR_DISPLAY_DIG_5_ADDR (CSR_BASE + 0x4014L)
#define CSR_DISPLAY_DIG_5_SIZE 1
static inline uint32_t display_dig_5_read(void) {
	return csr_read_simple(CSR_BASE + 0x4014L);
}
static inline void display_dig_5_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x4014L);
}
#define CSR_DISPLAY_DIG_6_ADDR (CSR_BASE + 0x4018L)
#define CSR_DISPLAY_DIG_6_SIZE 1
static inline uint32_t display_dig_6_read(void) {
	return csr_read_simple(CSR_BASE + 0x4018L);
}
static inline void display_dig_6_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x4018L);
}
#define CSR_DISPLAY_DIG_7_ADDR (CSR_BASE + 0x401cL)
#define CSR_DISPLAY_DIG_7_SIZE 1
static inline uint32_t display_dig_7_read(void) {
	return csr_read_simple(CSR_BASE + 0x401cL);
}
static inline void display_dig_7_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x401cL);
}

/* ledRGB_1 */
#define CSR_LEDRGB_1_BASE (CSR_BASE + 0x4800L)
#define CSR_LEDRGB_1_R_ENABLE_ADDR (CSR_BASE + 0x4800L)
#define CSR_LEDRGB_1_R_ENABLE_SIZE 1
static inline uint32_t ledRGB_1_r_enable_read(void) {
	return csr_read_simple(CSR_BASE + 0x4800L);
}
static inline void ledRGB_1_r_enable_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x4800L);
}
#define CSR_LEDRGB_1_R_WIDTH_ADDR (CSR_BASE + 0x4804L)
#define CSR_LEDRGB_1_R_WIDTH_SIZE 1
static inline uint32_t ledRGB_1_r_width_read(void) {
	return csr_read_simple(CSR_BASE + 0x4804L);
}
static inline void ledRGB_1_r_width_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x4804L);
}
#define CSR_LEDRGB_1_R_PERIOD_ADDR (CSR_BASE + 0x4808L)
#define CSR_LEDRGB_1_R_PERIOD_SIZE 1
static inline uint32_t ledRGB_1_r_period_read(void) {
	return csr_read_simple(CSR_BASE + 0x4808L);
}
static inline void ledRGB_1_r_period_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x4808L);
}
#define CSR_LEDRGB_1_G_ENABLE_ADDR (CSR_BASE + 0x480cL)
#define CSR_LEDRGB_1_G_ENABLE_SIZE 1
static inline uint32_t ledRGB_1_g_enable_read(void) {
	return csr_read_simple(CSR_BASE + 0x480cL);
}
static inline void ledRGB_1_g_enable_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x480cL);
}
#define CSR_LEDRGB_1_G_WIDTH_ADDR (CSR_BASE + 0x4810L)
#define CSR_LEDRGB_1_G_WIDTH_SIZE 1
static inline uint32_t ledRGB_1_g_width_read(void) {
	return csr_read_simple(CSR_BASE + 0x4810L);
}
static inline void ledRGB_1_g_width_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x4810L);
}
#define CSR_LEDRGB_1_G_PERIOD_ADDR (CSR_BASE + 0x4814L)
#define CSR_LEDRGB_1_G_PERIOD_SIZE 1
static inline uint32_t ledRGB_1_g_period_read(void) {
	return csr_read_simple(CSR_BASE + 0x4814L);
}
static inline void ledRGB_1_g_period_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x4814L);
}
#define CSR_LEDRGB_1_B_ENABLE_ADDR (CSR_BASE + 0x4818L)
#define CSR_LEDRGB_1_B_ENABLE_SIZE 1
static inline uint32_t ledRGB_1_b_enable_read(void) {
	return csr_read_simple(CSR_BASE + 0x4818L);
}
static inline void ledRGB_1_b_enable_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x4818L);
}
#define CSR_LEDRGB_1_B_WIDTH_ADDR (CSR_BASE + 0x481cL)
#define CSR_LEDRGB_1_B_WIDTH_SIZE 1
static inline uint32_t ledRGB_1_b_width_read(void) {
	return csr_read_simple(CSR_BASE + 0x481cL);
}
static inline void ledRGB_1_b_width_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x481cL);
}
#define CSR_LEDRGB_1_B_PERIOD_ADDR (CSR_BASE + 0x4820L)
#define CSR_LEDRGB_1_B_PERIOD_SIZE 1
static inline uint32_t ledRGB_1_b_period_read(void) {
	return csr_read_simple(CSR_BASE + 0x4820L);
}
static inline void ledRGB_1_b_period_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x4820L);
}

/* ledRGB_2 */
#define CSR_LEDRGB_2_BASE (CSR_BASE + 0x5000L)
#define CSR_LEDRGB_2_R_ENABLE_ADDR (CSR_BASE + 0x5000L)
#define CSR_LEDRGB_2_R_ENABLE_SIZE 1
static inline uint32_t ledRGB_2_r_enable_read(void) {
	return csr_read_simple(CSR_BASE + 0x5000L);
}
static inline void ledRGB_2_r_enable_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x5000L);
}
#define CSR_LEDRGB_2_R_WIDTH_ADDR (CSR_BASE + 0x5004L)
#define CSR_LEDRGB_2_R_WIDTH_SIZE 1
static inline uint32_t ledRGB_2_r_width_read(void) {
	return csr_read_simple(CSR_BASE + 0x5004L);
}
static inline void ledRGB_2_r_width_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x5004L);
}
#define CSR_LEDRGB_2_R_PERIOD_ADDR (CSR_BASE + 0x5008L)
#define CSR_LEDRGB_2_R_PERIOD_SIZE 1
static inline uint32_t ledRGB_2_r_period_read(void) {
	return csr_read_simple(CSR_BASE + 0x5008L);
}
static inline void ledRGB_2_r_period_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x5008L);
}
#define CSR_LEDRGB_2_G_ENABLE_ADDR (CSR_BASE + 0x500cL)
#define CSR_LEDRGB_2_G_ENABLE_SIZE 1
static inline uint32_t ledRGB_2_g_enable_read(void) {
	return csr_read_simple(CSR_BASE + 0x500cL);
}
static inline void ledRGB_2_g_enable_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x500cL);
}
#define CSR_LEDRGB_2_G_WIDTH_ADDR (CSR_BASE + 0x5010L)
#define CSR_LEDRGB_2_G_WIDTH_SIZE 1
static inline uint32_t ledRGB_2_g_width_read(void) {
	return csr_read_simple(CSR_BASE + 0x5010L);
}
static inline void ledRGB_2_g_width_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x5010L);
}
#define CSR_LEDRGB_2_G_PERIOD_ADDR (CSR_BASE + 0x5014L)
#define CSR_LEDRGB_2_G_PERIOD_SIZE 1
static inline uint32_t ledRGB_2_g_period_read(void) {
	return csr_read_simple(CSR_BASE + 0x5014L);
}
static inline void ledRGB_2_g_period_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x5014L);
}
#define CSR_LEDRGB_2_B_ENABLE_ADDR (CSR_BASE + 0x5018L)
#define CSR_LEDRGB_2_B_ENABLE_SIZE 1
static inline uint32_t ledRGB_2_b_enable_read(void) {
	return csr_read_simple(CSR_BASE + 0x5018L);
}
static inline void ledRGB_2_b_enable_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x5018L);
}
#define CSR_LEDRGB_2_B_WIDTH_ADDR (CSR_BASE + 0x501cL)
#define CSR_LEDRGB_2_B_WIDTH_SIZE 1
static inline uint32_t ledRGB_2_b_width_read(void) {
	return csr_read_simple(CSR_BASE + 0x501cL);
}
static inline void ledRGB_2_b_width_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x501cL);
}
#define CSR_LEDRGB_2_B_PERIOD_ADDR (CSR_BASE + 0x5020L)
#define CSR_LEDRGB_2_B_PERIOD_SIZE 1
static inline uint32_t ledRGB_2_b_period_read(void) {
	return csr_read_simple(CSR_BASE + 0x5020L);
}
static inline void ledRGB_2_b_period_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x5020L);
}

/* vga_cntrl */
#define CSR_VGA_CNTRL_BASE (CSR_BASE + 0x5800L)
#define CSR_VGA_CNTRL_MEM_ADR_ADDR (CSR_BASE + 0x5800L)
#define CSR_VGA_CNTRL_MEM_ADR_SIZE 1
static inline uint32_t vga_cntrl_mem_adr_read(void) {
	return csr_read_simple(CSR_BASE + 0x5800L);
}
static inline void vga_cntrl_mem_adr_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x5800L);
}
#define CSR_VGA_CNTRL_MEM_WE_ADDR (CSR_BASE + 0x5804L)
#define CSR_VGA_CNTRL_MEM_WE_SIZE 1
static inline uint32_t vga_cntrl_mem_we_read(void) {
	return csr_read_simple(CSR_BASE + 0x5804L);
}
static inline void vga_cntrl_mem_we_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x5804L);
}
#define CSR_VGA_CNTRL_MEM_DATA_W_ADDR (CSR_BASE + 0x5808L)
#define CSR_VGA_CNTRL_MEM_DATA_W_SIZE 1
static inline uint32_t vga_cntrl_mem_data_w_read(void) {
	return csr_read_simple(CSR_BASE + 0x5808L);
}
static inline void vga_cntrl_mem_data_w_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x5808L);
}
#define CSR_VGA_CNTRL_MEM_DATA_R_ADDR (CSR_BASE + 0x580cL)
#define CSR_VGA_CNTRL_MEM_DATA_R_SIZE 1
static inline uint32_t vga_cntrl_mem_data_r_read(void) {
	return csr_read_simple(CSR_BASE + 0x580cL);
}

#endif
