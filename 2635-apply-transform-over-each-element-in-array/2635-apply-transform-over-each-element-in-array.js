/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var map = function(arr, fn) {
    const res = [];
    arr.forEach((ele, idx) => {
        res[idx] = fn(ele, idx);
    });
    return res;
    
};