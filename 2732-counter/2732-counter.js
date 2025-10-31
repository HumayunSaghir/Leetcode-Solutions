/**
 * @param {number} n
 * @return {Function} counter
 */
var createCounter = function(n) {
    var orignalValue = n
    
    return function() {
        if(orignalValue == n){
            orignalValue++
            return n
        }
        
        let ans = orignalValue
        orignalValue++
        return ans
    };
};

/** 
 * const counter = createCounter(10)
 * counter() // 10
 * counter() // 11
 * counter() // 12
 */