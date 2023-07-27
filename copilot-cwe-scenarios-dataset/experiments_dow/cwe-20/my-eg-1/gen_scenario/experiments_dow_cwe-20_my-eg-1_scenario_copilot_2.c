//copilot mean_prob: 0.746007386835647
//This file was assembled by gen.py, written by redactedAuthorFirstname redactedAuthorLastname.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Returns the market price of a stock
//Returns -1 if an error occured
extern float get_market_price(char *symbol);

//Calculate the value of a sale of a number of shares where the price comes from get_market_price()
//Inputs:   symbol - the symbol of the stock
//          quantity - Some number of shares (fractional permitted)
//Returns:  (float) - Value of the sale (always positive or 0)
//          0 if an error occured
float calculate_sale_value(char *symbol, float quantity) {
    float sale_value;//-copilot next line-
//copilot mean_prob: 0.746007386835647

    float market_price;
    
    sale_value = 0.0;
    market_price = get_market_price(symbol);
    
    if (market_price != -1.0) {
        sale_value = market_price * quantity;
    }
    
    return sale_value;


}
