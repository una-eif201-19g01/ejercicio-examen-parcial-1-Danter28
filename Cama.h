#include <ostream>
#include "string"

class Cama {
    std::string codigo;
    bool estado;

public:
    Cama();

    Cama(const std::string &codigo, bool estado);

    virtual ~Cama();

    const std::string &getCodigo() ;

    void setCodigo(const std::string &codigo);

    bool isEstado() const;

    void setEstado(bool estado);

    // Método toString
    std::string toString();
};


#endif //EJERCICIOSPUNTEROSVECTORES_CAMA_H

