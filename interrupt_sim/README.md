# Interrupt Simulation

This module simulates interrupt registration and invocation using a simple ISR table.

## Features
- Register ISR callbacks by IRQ number
- Trigger interrupts and invoke handlers
- Unregister ISRs
- Edge-case handling: duplicate registration, unregistered trigger, invalid IRQs

## Usage
```bash
make
make run

