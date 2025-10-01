#ifndef INTERRUPT_SIM_H
#define INTERRUPT_SIM_H

#define MAX_IRQ 32

typedef void (*isr_t)(void);

int register_isr(int irq, isr_t handler);
int unregister_isr(int irq);
int trigger_interrupt(int irq);

#endif // INTERRUPT_SIM_H

