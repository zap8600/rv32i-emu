# rv32i-emu
MY rv32i emu
## But, what about rv64
Eh. I gave up. It wouldn't work no matter what. Besides, I want to make my own RISC-V 32-bit processor, so having an emulator will let me develop programs for it without needing to reflash an EEPROM or anything like that.
## What all will it do
It will have the entire Unprivileged RV32I ISA (minus `ecall` and `ebreak`), no modes (e.g. no S-Mode, M-Mode, U-Mode), no interrupts, no CSRs, and a 16550a UART so that I have more ways of debugging. 
## Software
Probably a stripped version of my OS, CCOS.