void FUN0()
{
    int data;
    int *dataPtr1 = &data;
    int *dataPtr2 = &data;
    data = -1; 
    {
        int data = *dataPtr1;
        data = OPEN("BadSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
        CLOSE(data);
        *dataPtr1 = data;
    }
    {
        int data = *dataPtr2;
<START>
        CLOSE(data);
<END>
    }
}
