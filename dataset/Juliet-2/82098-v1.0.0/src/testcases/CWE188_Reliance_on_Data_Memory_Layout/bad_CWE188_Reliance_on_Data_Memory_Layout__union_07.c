static int staticFive = 5;
void FUN0()
{
    if(staticFive==5)
    {
        {
            union
            {
                struct
                {
                    char charFirst, charSecond, charThird, charFourth;
                } structChars;
                long longNumber;
            } unionStructLong;
            unionStructLong.longNumber = 0x10203040;
<START>
            unionStructLong.structChars.charFourth |= 0x80; 
<END>
            printIntLine(unionStructLong.longNumber);
        }
    }
}