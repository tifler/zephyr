# SPDX-License-Identifier: Apache-2.0

zephyr_sources_ifdef(CONFIG_ARCV2_INTERRUPT_UNIT    arcv2_irq_unit.c)
zephyr_sources_ifdef(CONFIG_IOAPIC                  ioapic_intr.c)
zephyr_sources_ifdef(CONFIG_LOAPIC                  loapic_intr.c system_apic.c)
zephyr_sources_ifdef(CONFIG_LOAPIC_SPURIOUS_VECTOR  loapic_spurious.S)
zephyr_sources_ifdef(CONFIG_PLIC                    plic.c)
zephyr_sources_ifdef(CONFIG_SHARED_IRQ              shared_irq.c)
zephyr_sources_ifdef(CONFIG_EXTI_STM32              exti_stm32.c)
zephyr_sources_ifdef(CONFIG_CAVS_ICTL               cavs_ictl.c)
zephyr_sources_ifdef(CONFIG_DW_ICTL                 dw_ictl.c)
zephyr_sources_ifdef(CONFIG_RV32M1_INTMUX           rv32m1_intmux.c)
zephyr_sources_ifdef(CONFIG_SAM0_EIC                sam0_eic.c)
zephyr_sources_ifdef(CONFIG_VEXRISCV_LITEX_IRQ      vexriscv_litex.c)
