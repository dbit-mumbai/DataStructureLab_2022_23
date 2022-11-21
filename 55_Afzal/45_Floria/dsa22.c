void update()
{
    if (count==0) //checks if time was input before display function was called
    {
        printf("Please input time first\n");
    }
    else
    {
        int h, m, s;
        
        h=t.hour, m=t.minute, s=t.second+1; //increments seconds value by 1
        
        while (s>=60) //to have seconds value under 60
        {
            s = s-60;
            m++; //increments minutes by 1 
        }
        t.second=s; //saves the seconds value
    
        while (m>=60) //to have minutes value under 60
        {
            m = m-60; 
            h++; //increments hours by 1 
        }
        t.minute=m; //saves the minutes value
    
        while (h>=24) //to have hours value under 24
        {
            h = h-24;
        }
        t.hour=h; //saves the hours value
        count=1;
    }

}
