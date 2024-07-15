static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    int data;
    data = -1; 
    if(STATIC_CONST_FIVE==5)
    {
        data = OPEN("BadSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
        CLOSE(data);
    }
    if(STATIC_CONST_FIVE==5)
    {
<START>
        CLOSE(data);
<END>
    }
}
