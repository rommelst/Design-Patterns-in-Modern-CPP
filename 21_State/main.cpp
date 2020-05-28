int classic_main();
int handmade_main(char* argv[]);
int msm_main();

int main(int argc, char* argv[])
{
    classic_main();
    handmade_main(argv);
    msm_main();
}
