.data 
 text: .asciiz "Hello World, My name is Arsh."
 prompt: .asciiz "Enter an integer to offset and print string: "
 
.text 
 li $v0, 4
 la $a0, prompt
 syscall
 
 li $v0, 5
 syscall
 la $s0, text($v0)
 
 li $v0, 4
 la $a0, ($s0)
 syscall
 
 