#ifndef A1_DATEEXCEPTION_H
#define A1_DATEEXCEPTION_H

class DateException: public std::exception {
private:
    std::string m;
public:
    DateException();
    DateException(const std::string &message);
    const char *what() const throw();
};

#endif //A1_DATEEXCEPTION_H
