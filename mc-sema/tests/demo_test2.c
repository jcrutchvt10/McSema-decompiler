void __attribute__((naked, used)) demo2() {
    __asm__ volatile (
            "start:\n"
                "mov %eax, %ecx\n"
                "xor %eax, %eax\n"
                "inc %eax\n"
                "xor %ebx, %ebx\n"
            "header:\n"
                "cmp %ecx, %ebx\n"
                "je done\n"
                "add %eax, %eax\n"
                "inc %ebx\n"
                "jmp header\n"
            "done:\n"
                "ret\n"
            );
}

int main() {
    return 0;
}
