extern int g;


void main(int x) {
  g++;
  asm volatile("nop" : : "r"(x) : "memory" );
  g++;
}
