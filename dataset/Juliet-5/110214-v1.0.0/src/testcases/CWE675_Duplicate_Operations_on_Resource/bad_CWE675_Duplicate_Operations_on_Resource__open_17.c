void FUN0()
{
    int i,j;
    int data;
    data = -1; 
    for(i = 0; i < 1; i++)
    {
        data = OPEN("BadSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
        CLOSE(data);
    }
    for(j = 0; j < 1; j++)
    {
<START>
        CLOSE(data);
<END>
    }
}
