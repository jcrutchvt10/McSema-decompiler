void __attribute__((naked, used)) demo1() {
    __asm__ volatile (
            "addl $1, %eax\n"
            "ret\n"
            );
}

int main() {
    return 0;
}
