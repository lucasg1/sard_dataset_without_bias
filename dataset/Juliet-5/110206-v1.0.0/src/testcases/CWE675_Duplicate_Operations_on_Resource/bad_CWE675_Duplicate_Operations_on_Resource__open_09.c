void FUN0()
{
    int data;
    data = -1; 
    if(GLOBAL_CONST_TRUE)
    {
        data = OPEN("BadSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
        CLOSE(data);
    }
    if(GLOBAL_CONST_TRUE)
    {
<START>
        CLOSE(data);
<END>
    }
}
