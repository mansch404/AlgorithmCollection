
.data
array: .long 3,2,6,4,1
count: .long 5
.text
.global _main
_main: 
movslq count(%rip), %rcx
dex %rcx
outerLoop:
push %rcx
leaq array(%rip), %rsi
innerLoop:
movl(%rsi), %eax
cmpl %eax, 4(%rsi)
jg nextStep
xchgl 4(%rsi), %eax
movl %eax, (%rsi)
nextStep:
addq $4, %rsi
loop innerLoop
popq %rcx
loop outerLoop
movq $0x2000001, %rax
xorq %rdi, %rdi
syscall
.end 
