static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    int data;
    data = -1;
    data = OPEN("BadSource_open.txt", O_RDWR|O_CREAT, S_IREAD|S_IWRITE);
    if(STATIC_CONST_FIVE==5)
    {
<START>
<END>
        ; 
    }
}
