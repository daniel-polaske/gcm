int main() {
    line_segment gcm(line_segment a,
    line_segment b) {
    if (a == b) return a;
    if (a > b) return gcm(a-b, b);
    if (a < b) return gcm(a, b-a);
    }
}
