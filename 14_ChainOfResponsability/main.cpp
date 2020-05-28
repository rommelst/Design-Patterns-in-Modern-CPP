int chain_of_responsability_main();
int cor_broker_main(int ac, char* av);

int main(int argc, char* argv[])
{
    chain_of_responsability_main();
    cor_broker_main(argc, *argv);
}
