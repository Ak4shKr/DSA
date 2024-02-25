function isPrime(N) {
  for (let i = 2; i < N; i++) {
    if (N % i === 0) {
      return false;
    }
  }
  return true;
}

let n = 11;
let ans = isPrime(n);

if (n !== 1 && ans === true) {
  console.log("Prime Number");
} else {
  console.log("Non Prime Number");
}
