void FUN0(int data)
{
<START>
    CLOSE(data);
<END>
}
void FUN1()
{
    int data;
    void (*funcPtr) (int) = FUN0;
    data = -1; 
    data = OPEN("BadSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
    CLOSE(data);
    funcPtr(data);
}
