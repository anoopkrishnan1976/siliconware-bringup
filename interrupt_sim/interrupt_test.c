#include "interrupt_sim.h"
#include <stdio.h>

void isr_timer(void) {
    printf("[ISR] Timer interrupt triggered\n");
}

void isr_uart(void) {
    printf("[ISR] UART interrupt triggered\n");
}

int main() {
    printf("=== Register ISRs ===\n");
    register_isr(5, isr_timer);
    register_isr(10, isr_uart);

    printf("=== Trigger Interrupts ===\n");
    trigger_interrupt(5);   // Should call isr_timer
    trigger_interrupt(10);  // Should call isr_uart

    printf("=== Trigger Unregistered Interrupt ===\n");
    int result = trigger_interrupt(7);  // No ISR
    printf("Trigger result: %d (expected -2)\n", result);

    printf("=== Duplicate Registration ===\n");
    int dup = register_isr(5, isr_uart);  // Already registered
    printf("Duplicate registration result: %d (expected -2)\n", dup);

    printf("=== Unregister and Retrigger ===\n");
    unregister_isr(5);
    result = trigger_interrupt(5);  // Should fail
    printf("Trigger after unregister: %d (expected -2)\n", result);

    return 0;
}

