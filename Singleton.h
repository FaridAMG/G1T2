//
// Created by jonathan on 02/10/18.
//

#ifndef SINGLETON_SINGLETON_H
#define SINGLETON_SINGLETON_H


class Singleton {
private:
    /**
     * Private constructor to preven instancing.
     */
    Singleton();

public:
    /**
     * Statis access method.
     * @return instance.
     */
    static Singleton *getInstance();
};

/**
 *
 * @return
 */
Singleton *Singleton::getInstance() {
    static Singleton instance;
    return &instance;
}

/**
 *
 */
Singleton::Singleton() {}

#endif //SINGLETON_SINGLETON_H