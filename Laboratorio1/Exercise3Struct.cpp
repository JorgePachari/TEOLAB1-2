#include <iostream>
#include <string>

// Estructura Paciente
struct Paciente {
    int numeroAsegurado;
    std::string nombre;
    int edad;
    std::string direccion;
    
    // Método para mostrar los detalles del paciente
    void mostrarDetalles() {
        std::cout << "Detalles del Paciente:\n";
        std::cout << "Numero de Asegurado: " << numeroAsegurado << std::endl;
        std::cout << "Nombre: " << nombre << std::endl;
        std::cout << "Edad: " << edad << std::endl;
        std::cout << "Direccion: " << direccion << std::endl;
    }
};

// Estructura Medico
struct Medico {
    std::string nombre;
    std::string especialidad;
    
    // Método para mostrar los detalles del medico
    void mostrarDetalles() {
        std::cout << "Detalles del Medico:\n";
        std::cout << "Nombre: " << nombre << std::endl;
        std::cout << "Especialidad: " << especialidad << std::endl;
    }
};

// Estructura CitaMedica
struct CitaMedica {
    std::string fechaHora;
    std::string tipoAtencion;
    Paciente paciente;  // Relación con Paciente
    Medico medico;      // Relación con Medico
    std::string estadoCita;

    // Método para mostrar los detalles de la cita
    void mostrarDetalles() {
        std::cout << "Detalles de la Cita Médica:\n";
        std::cout << "Fecha y Hora: " << fechaHora << std::endl;
        std::cout << "Tipo de Atencion: " << tipoAtencion << std::endl;
        paciente.mostrarDetalles();  // Muestra detalles del paciente
        medico.mostrarDetalles();    // Muestra detalles del medico
        std::cout << "Estado de la Cita: " << estadoCita << std::endl;
    }

    // Método para cancelar la cita
    void cancelarCita() {
        estadoCita = "Cancelada";
        std::cout << "La cita ha sido cancelada." << std::endl;
    }
};

int main() {
    // Crear un paciente
    Paciente paciente1 = {123456, "Juan Perez", 30, "Calle Falsa 123"};

    // Crear un médico
    Medico medico1 = {"Dr. Garcia", "Medicina General"};

    // Crear una cita médica
    CitaMedica cita1 = {"2024-09-25 10:30 AM", "Consulta General", paciente1, medico1, "Agendada"};

    // Mostrar los detalles de la cita
    cita1.mostrarDetalles();

    // Cancelar la cita
    cita1.cancelarCita();

    // Mostrar los detalles actualizados
    cita1.mostrarDetalles();

    return 0;
}
