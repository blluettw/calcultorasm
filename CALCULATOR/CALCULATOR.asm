    .model flat, c
    .code

    multiplicar proc 
        push ebp
        mov  ebp, esp
        mov  eax, [ebp + 8]
        mov  ecx, [ebp + 12]
        mul  ecx
        pop  ebp
        ret
somadepoisubtrai proc 
        push ebp
        mov  ebp, esp
        mov  eax, [ebp + 8]
        mov  ecx, [ebp + 12]
        mov  edx, [ebp + 16]
        add  eax, ecx
        sub  eax, edx
        pop  ebp
        ret
somadepoisubtrai endp
multiplicar endp
    end




