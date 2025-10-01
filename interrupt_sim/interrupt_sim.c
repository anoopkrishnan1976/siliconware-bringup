#include "interrupt_sim.h"
#include <stdio.h>

static isr_t isr_table[MAX_IRQ] = {0};

int register_isr(int irq, isr_t handler) {
    if (irq < 0 || irq >= MAX_IRQ) return -1;
    if (isr_table[irq]) return -2;  // Already registered
    isr_table[irq] = handler;
    return 0;
}

int unregister_isr(int irq) {
    if (irq < 0 || irq >= MAX_IRQ) return -1;
    if (!isr_table[irq]) return -2;  // Not registered
    isr_table[irq] = NULL;
    return 0;
}

int trigger_interrupt(int irq) {
    if (irq < 0 || irq >= MAX_IRQ) return -1;
    if (!isr_table[irq]) return -2;  // No handler
    isr_table[irq]();
    return 0;
}

