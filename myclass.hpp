class Pizza { // pizza class

    public: // public accessible attributes
    float npeople; // attribute of n of people at dinner
    float water; // attribute water in percentage


    // class constructor, holds the attributes npeople and water
    Pizza(float x, float y){
        npeople = x;
        water = y;
    }


    // class methods
    
    // total dough amount 
    float doughAmount(){
        return npeople * 0.250; 
    }

    float flourAmount(){
        // eq (1x + H2O_x) = totamount; ==> x = totamount/(1+(H2O/100))
        return doughAmount()/(1+(water/100));
    }

    float waterAmount(){
        return doughAmount()-flourAmount();
    }

};
