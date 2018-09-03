// Helper functions for music

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#include "helpers.h"

// Converts a fraction formatted as X/Y to eighths
int duration(string fraction)
{
    int duration;

    int n = atoi(&fraction[0]);
    int d = atoi(&fraction[2]);

    if (d == 8)
    {
        duration = n;
        return (duration);
    }

    else if (d == 4)
    {
        duration = n * 2;
        return (duration);
    }

    else if (d == 2)
    {
        duration = n * 4;
        return (duration);
    }

    else if (d == 1)
    {
        duration = n * 8;
        return (duration);
    }
    else
    {
        return (1);
    }
    return (0);
}

// Calculates frequency (in Hz) of a note
int frequency(string note)
{
    double frequency;
    if (strlen(note) == 2)
    {
        int octave2 = atoi(&note[1]);

        switch (note[0])
        {
            case 'A':
                frequency = 440.0 * pow(2.0, (octave2 - 4.0));
                frequency = round(frequency);
                return (frequency);
                break;
            case 'B':
                frequency = (pow(2.0, (1.0 / 6)) * 440.0) * pow(2.0, (octave2 - 4.0));
                frequency = round(frequency);
                return (frequency);
                break;
            case 'C':
                frequency = (pow(2.0, (-9.0 / 12)) * 440.0) * pow(2.0, (octave2 - 4.0));
                frequency = round(frequency);
                return (frequency);
                break;
            case 'D':
                frequency = (pow(2.0, (-7.0 / 12)) * 440.0) * pow(2.0, (octave2 - 4.0));
                frequency = round(frequency);
                return (frequency);
                break;
            case 'E':
                frequency = (pow(2.0, (-5.0 / 12)) * 440.0) * pow(2.0, (octave2 - 4.0));
                frequency = round(frequency);
                return (frequency);
                break;
            case 'F':
                frequency = (pow(2.0, (-4.0 / 12)) * 440.0) * pow(2.0, (octave2 - 4.0));
                frequency = round(frequency);
                return (frequency);
                break;
            case 'G':
                frequency = (pow(2.0, (-1.0 / 6)) * 440.0) * pow(2.0, (octave2 - 4.0));
                frequency = round(frequency);
                return (frequency);
                break;
        }

    }
    else if (strlen(note) == 3)
    {
        int octave3 = atoi(&note[2]);

        if ((note[0] == 'A' && note[1] == '#') || (note[0] == 'B' && note[1] == 'b'))
        {
            frequency = (pow(2.0, (1.0 / 12)) * 440.0) * pow(2.0, (octave3 - 4.0));
            frequency = round(frequency);
            return (frequency);
        }
        else if ((note[0] == 'G' && note[1] == '#') || (note[0] == 'A' && note[1] == 'b'))
        {
            frequency = (pow(2.0, (-1.0 / 12)) * 440.0) * pow(2.0, (octave3 - 4.0));
            frequency = round(frequency);
            return (frequency);
        }
        else if ((note[0] == 'F' && note[1] == '#') || (note[0] == 'G' && note[1] == 'b'))
        {
            frequency = (pow(2.0, (-3.0 / 12)) * 440.0) * pow(2.0, (octave3 - 4.0));
            frequency = round(frequency);
            return (frequency);
        }
        else if (note[0] == 'E' && note[1] == '#')
        {
            frequency = (pow(2.0, (-4.0 / 12)) * 440.0) * pow(2.0, (octave3 - 4.0));
            frequency = round(frequency);
            return (frequency);
        }
        else if (note[0] == 'F' && note[1] == 'b')
        {
            frequency = (pow(2.0, (-5.0 / 12)) * 440.0) * pow(2.0, (octave3 - 4.0));
            frequency = round(frequency);
            return (frequency);
        }
        else if ((note[0] == 'D' && note[1] == '#') || (note[0] == 'E' && note[1] == 'b'))
        {
            frequency = (pow(2.0, (-1.0 / 2)) * 440.0) * pow(2.0, (octave3 - 4.0));
            frequency = round(frequency);
            return (frequency);
        }
        else if ((note[0] == 'C' && note[1] == '#') || (note[0] == 'D' && note[1] == 'b'))
        {
            frequency = (pow(2.0, (-8.0 / 12)) * 440.0) * pow(2.0, (octave3 - 4.0));
            frequency = round(frequency);
            return (frequency);
        }
        else if (note[0] == 'C' && note[1] == 'b')
        {
            frequency = (pow(2.0, (1.0 / 6)) * 440.0) * pow(2.0, (octave3 - 4.0));
            frequency = round(frequency);
            return (frequency);
        }
        else if (note[0] == 'B' && note[1] == '#')
        {
            frequency = (pow(2.0, (-9 / 12.0)) * 440.0) * pow(2.0, (octave3 - 4.0));
            frequency = round(frequency);
            return (frequency);
        }
        else
        {
            return (1);
        }
    }
    else
    {
        return (1);
    }
    return (0);
}

// Determines whether a string represents a rest
bool is_rest(string s)
{
    if (s[0] == '\0')
    {
        return true;
    }
    else
    {
        return false;
    }
}
