void FUN0()
{
    int j;
    for(j = 0; j < 1; j++)
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
