<?php

namespace Drupal\custom_views\Plugin\Action;

use Drupal\Core\Annotation\Action;
use Drupal\Core\Annotation\Translation;
use Drupal\Core\Session\AccountInterface;
use Drupal\Core\StringTranslation\StringTranslationTrait;
use Drupal\views_bulk_operations\Action\ViewsBulkOperationsActionBase;

/**
 * Class ChangeGender
 *
 * @Action(
 *   id = "change_gender",
 *   label = @Translation("Change gener"),
 *   type = "pets_owners_storage"
 * )
 */
class ChangeGender extends ViewsBulkOperationsActionBase{

  use StringTranslationTrait;

  /**
   * @inheritDoc
   */
  public function access($object, AccountInterface $account = NULL, $return_as_object = FALSE) {
    // TODO: Implement access() method.
  }

  /**
   * @inheritDoc
   */
  public function execute() {
    return $this->t('Some result');
  }


}
