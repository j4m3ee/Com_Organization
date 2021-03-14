    .data
    .balign 4
get_num_1: .asciz "Number 1 :\n"

    .balign 4
get_num_2: .asciz "Number 2 :\n"

    .balign 4
pattern: .asciz "%d"

    .balign 4
num_1: .word 0

    .balign 4
num_2: .word 0

    .balign 4
output: .asciz "Most value is %d\n"

    .balign 4
lr_bu: .word 0

    .balign 4
lr_bu_2: .word 0

.text
.global main

main:
    LDR R1, addr_lr_bu
    STR lr, [R1]

    LDR R0, addr_get_num_1
    BL printf

    LDR R0, addr_pattern
    LDR R1, addr_num_1
    BL scanf

    LDR R0, addr_get_num_2
    BL printf

    LDR R0, addr_pattern
    LDR R1, addr_num_2
    BL scanf

    LDR R0, addr_num_1
    LDR R0, [R0]
    LDR R1, addr_num_2
    LDR R1, [R1]
    CMP R0,R1
    Ble exit
    MOV R1, R0
    BL exit

exit:
    LDR R0, addr_output
    BL printf

    LDR lr,addr_lr_bu
    LDR lr, [lr]
    BX lr

addr_get_num_1: .word get_num_1
addr_get_num_2: .word get_num_2
addr_pattern: .word pattern
addr_num_1: .word num_1
addr_num_2: .word num_2
addr_output: .word output
addr_lr_bu: .word lr_bu

.global printf
.global scanf
