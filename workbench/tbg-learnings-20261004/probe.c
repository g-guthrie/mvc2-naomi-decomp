float two(void) { return 2.0f; }
const float decimals[] = {3.05f, 3.0500001907348633f};
const char literal_once[] = "abc";
const char literal_twice[sizeof("def")] = "def";
const char *mutable_table[] = {"ghi"};
const char *const fixed_table[] = {"jkl"};
extern void consume(void *);
void zero_buffer(void) { unsigned char buffer[32] = {0}; consume(buffer); }
