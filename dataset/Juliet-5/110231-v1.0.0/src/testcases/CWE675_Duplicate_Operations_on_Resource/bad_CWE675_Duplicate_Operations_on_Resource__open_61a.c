int FUN0(int data)
{
    data = OPEN("BadSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
    CLOSE(data);
    return data;
}
int FUN0(int data);
void FUN2()
{
    int data;
    data = -1; 
    data = FUN0(data);
<START>
    CLOSE(data);
<END>
}
