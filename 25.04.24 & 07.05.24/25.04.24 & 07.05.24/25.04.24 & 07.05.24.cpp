#include <iostream>
using namespace std;

class PersonalInfo {
public:
    string firstname;
    int firstname_length;
    string surname;
    int surname_length;
    string lastname;
    int lastname_length;
};

class BirthInfo {
public:
    int birth_day;
    int birth_month;
    int birth_year;
    string znak_zodiaka;
    int length_zodiak;
};

class EducationInfo {
public:
    int start_day;
    int start_month;
    int start_year;
    int kurs;
};

class AttendanceInfo {
public:
    int lessons_visited;
    int lessons_late;
};

class TeacherInfo {
public:
    string teacher_name;
    string subject_name;
};

class GradesInfo {
public:
    int* dz_rates;
    int dz_count;
    int practice_count;
    int exam_count;
    int zachet_count;
    double total_average_rate;
};

class AddressInfo {
public:
    string city;
    int city_length;
    string street;
    int street_length;
    int house_number;
    char korpus;
    short postal_code;
};

class CountryInfo {
public:
    string country;
    int country_length;
    string region;
    int region_length;
};

class EnrollmentInfo {
public:
    int start_day;
    int start_month;
    int start_year;
};

class GroupDetails {
public:
    string group_name;
    int group_name_length;
    string specialization;
    int specialization_length;
};

class AcademicPerformance {
public:
    float dz_average_rate;
    float practice_average_rate;
    float exam_average_rate;
    float zachet_average_rate;
};

class GradesHistory {
public:
    int* dz_rates;
    int* practice_rates;
    int* exam_rates;
    int* zachet_rates;
};

class TeacherDetails {
public:
    string teacher_name;
    string subject_name;
};

class StudentCountInfo {
public:
    int students_count;
};

class LessonAttendanceInfo {
public:
    int lessons_visited;
    int lessons_late;
};