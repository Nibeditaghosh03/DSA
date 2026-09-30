class Solution {
public:
    double angleClock(int hour, int minutes) {
        double hourAngle = 30 * (hour % 12) + 0.5 * minutes;
        double minuteAngle = 6 * minutes;

        double angle = abs(hourAngle - minuteAngle);

        return min(angle, 360 - angle);
    }
};