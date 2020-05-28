int visitor_double_main();
int visitor_acyclic_main();
void visitor_intrusive_main();
int visitor_multimethods_main(int argc, char* argv[]);
void visitor_reflective_main();

int main(int argc, char* argv[])
{
    visitor_double_main();
    visitor_acyclic_main();
    visitor_intrusive_main();
    visitor_multimethods_main(argc, argv);
    visitor_reflective_main();
}
