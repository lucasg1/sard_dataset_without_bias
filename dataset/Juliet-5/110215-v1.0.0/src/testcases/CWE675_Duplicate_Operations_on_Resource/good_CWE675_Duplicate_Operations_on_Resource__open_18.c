void FUN0()
{
    int data;
    data = -1; 
    goto source;
source:
    data = OPEN("BadSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
    CLOSE(data);
    goto sink;
sink:
    ; 
}
void FUN1()
{
    int data;
    data = -1; 
    goto source;
source:
    data = OPEN("GoodSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
    goto sink;
sink:
    CLOSE(data);
}
