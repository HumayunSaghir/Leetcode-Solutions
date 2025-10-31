/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function(init) {
    let orignalValue = init
    
    let obj = {
        increment: () => {
            init = init + 1
            return init
        },

        decrement: () => {
            init = init - 1
            return init
        },

        reset : () => {
            init = orignalValue
            return init
        },

    }

    return obj
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */