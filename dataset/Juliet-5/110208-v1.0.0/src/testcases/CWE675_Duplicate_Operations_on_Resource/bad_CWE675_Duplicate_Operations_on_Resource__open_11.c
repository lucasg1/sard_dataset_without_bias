void FUN0()
{
    int data;
    data = -1; 
    if(globalReturnsTrue())
    {
        data = OPEN("BadSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
        CLOSE(data);
    }
    if(globalReturnsTrue())
    {
<START>
        CLOSE(data);
<END>
    }
}
