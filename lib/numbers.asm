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
        
        ;********SETTING UP **********
        xor     rax, rax    ; cheap 0 (Accumulator [to be returned]
        xor     rcx, rcx    ; cheap 0 again (Counter)
        mov     rdx, 10     ; move into rdx to multiply by

n_dtoi_top:
        mov     dl, [rdi+rcx]     ; take first char
        inc     rcx ; increment counter

        ;*******INPUT VALIDATION*******
        cmp     dl, '0'     ; is it valid?
        jl      n_dtoi_done ; if not int, jump to n_dtoi_done
        cmp     dl, '9'
        jg      n_dtoi_done

        ; If null byte, done (If done
        ; correctly, the proper value will be in rax         
        je      n_dtoi_done  

        ; The following only needs to be done before
        ; the proc reaches end of string
        sub     dl, '0'    ; subtract 0 (turn into num)
        mul     rdx
        add     rax, [dl]
        jmp     n_dtoi_top

n_dtoi_done:
        ret

n_n_btoi:
        mov     rax, 42
        ret


