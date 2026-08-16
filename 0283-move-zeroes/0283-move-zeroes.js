var moveZeroes = function(a) {
    let n = a.length;
    let j = -1;

    // Find first zero
    for (let i = 0; i < n; i++) {
        if (a[i] === 0) {
            j = i;
            break;
        }
    }

    // No zero present
    if (j === -1) return;

    // Move non-zero elements forward
    for (let i = j + 1; i < n; i++) {
        if (a[i] !== 0) {
            [a[i], a[j]] = [a[j], a[i]];
            j++;
        }
    }
};