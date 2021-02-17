#ifndef A1_DATEEXCEPTION_H
#define A1_DATEEXCEPTION_H

class DateException: public std::exception {
public:
    DateException();
    const char *what() const throw();
};

#endif //A1_DATEEXCEPTION_H
