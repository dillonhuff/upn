#include <string>

namespace upn {

  class integer {
  private:
    std::string digits;

  public:
    integer(const std::string&);

    integer operator+(const integer& ) const;

    bool operator==(const integer&) const;

    void print(std::ostream& out) const;

    inline bool operator!=(const integer& other) const {
      return !(*this == other);
    }

  };

  std::ostream& operator<<(std::ostream& out, const integer& i);

}
