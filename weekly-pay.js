// Function to calculate weekly pay
function calculateWeeklyPay(hourlyWage, regularHours, overtimeHours) {
    // Regular pay
    const regularPay = hourlyWage * regularHours;

    // Overtime pay (1.5 times hourly wage)
    const overtimePay = overtimeHours * (1.5 * hourlyWage);

    // Total pay
    const totalPay = regularPay + overtimePay;

    return totalPay;
}

// Example inputs
const hourlyWage = 100;
const regularHours = 40;
const overtimeHours = 10;

// Function call
const totalWeeklyPay = calculateWeeklyPay(hourlyWage, regularHours, overtimeHours);

// Output
console.log("Total Weekly Pay:", totalWeeklyPay);