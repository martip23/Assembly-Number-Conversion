; basic stub file for lab 5

        bits    64
        global  n_len, n_dtoi, n_btoi

        section .text

; in each of these functions, the address of the string is in rdi
; you may use rax, rcx, rdx freely. Do not modify rbx or rbp
n_len:
        ; loop over all chars looking for null byte
        xor     rax, rax     ; cheap zero
        xor     rcx, rcx
len_loop:
        mov     dl, [rdi+rax]
        cmp     dl, 0       ; is it a zero byte
        jz      len_done
        inc     rax
        jmp     len_loop
len_done:
        ret

n_dtoi:
        xor     rax, rax    ; cheap 0
        sub     rdi, 0      ; subtract 0 (turn into num)

        ret

n_n_btoi:
        mov     rax, 42
        ret


