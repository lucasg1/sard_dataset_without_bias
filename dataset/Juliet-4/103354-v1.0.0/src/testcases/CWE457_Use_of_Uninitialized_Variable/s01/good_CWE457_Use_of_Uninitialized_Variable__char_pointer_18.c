void FUN0()
{
    char * data;
    goto source;
source:
    ; 
    goto sink;
sink:
    data = "string";
    printLine(data);
}
void FUN1()
{
    char * data;
    goto source;
source:
    data = "string";
    goto sink;
sink:
    printLine(data);
}
